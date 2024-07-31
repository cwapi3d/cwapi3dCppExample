//
// Created by brunn on 22/07/2024.
//

#pragma once

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <cwapi3d/CwAPI3D.h>


class MockGeometryController : public CwAPI3D::Interfaces::ICwAPI3DGeometryController {
public:
    virtual ~MockGeometryController() = default;

    MOCK_METHOD(void, rotateHeightAxis90, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(void, rotateHeightAxis180, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(double, getOverWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setOverWidth, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getOverHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setOverHeight, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getOverLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setOverLength, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getRoundingWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundingWidth, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getRoundingHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundingHeight, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getRoundingLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundingLength, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getCrossCorrectionNegativeWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setCrossCorrectionNegativeWidth, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override
    ));
    MOCK_METHOD(double, getCrossCorrectionPositiveWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setCrossCorrectionPositiveWidth, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override
    ));
    MOCK_METHOD(double, getCrossCorrectionNegativeHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setCrossCorrectionNegativeHeight, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (
    override));
    MOCK_METHOD(double, getCrossCorrectionPositiveHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setCrossCorrectionPositiveHeight, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (
    override));
    MOCK_METHOD(double, getCrossCorrectionNegativeLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setCrossCorrectionNegativeLength, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (
    override));
    MOCK_METHOD(double, getCrossCorrectionPositiveLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setCrossCorrectionPositiveLength, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (
    override));
    MOCK_METHOD(double, getWeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getListWeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getVolume, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getListVolume, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getXL, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getYL, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getZL, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getCenterOfGravity, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::referenceSide, getReferenceSide, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::Interfaces::ICwAPI3DVertexList *, getElementVertices, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, applyGlobalScale, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double, CwAPI3D::vector3D), (
    override));
    MOCK_METHOD(void, autoRegenerateAxes, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(void, rotateLengthAxis90, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(void, rotateLengthAxis180, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(void, invertModel, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(CwAPI3D::Interfaces::ICwAPI3DFacetList *, getElementFacets, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getListWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getListHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getListLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setWidthReal, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(void, setHeightReal, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(void, setLengthReal, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(void, rotateHeightAxis2Points, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, CwAPI3D::vector3D, CwAPI3D
    ::vector3D), (override));
    MOCK_METHOD(double, getMinimumDistanceBetweenElements, (CwAPI3D::elementID, CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getTotalAreaOfAllFaces, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getAreaOfFrontFace, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getDoorSurface, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(double, getWindowSurface, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(void, createDivisionZone, (CwAPI3D::elementID, CwAPI3D::vector3D, CwAPI3D::divisionZoneDirection), (
    override));
    MOCK_METHOD(void, deleteDivisionZone, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::Interfaces::ICwAPI3DVertexList *, getDivisionZonePoints, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getLocalX, (), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getLocalZ, (), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getLocalY, (), (override));
    MOCK_METHOD(void, clearErrors, (), (override));
    MOCK_METHOD(void, setDrillingTolerance, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, double), (override));
    MOCK_METHOD(double, getDrillingTolerance, (CwAPI3D::elementID), (override));
    MOCK_METHOD(CwAPI3D::Interfaces::ICwAPI3DVertexList *, getElementReferenceFaceVertices, (CwAPI3D::elementID), (
    override));
    MOCK_METHOD(double, getElementReferenceFaceArea, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, autoRegenerateAxesSilently, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(void, rotateLengthAxis2Points, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, CwAPI3D::vector3D, CwAPI3D
    ::vector3D), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getCenterOfGravityForList, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *), (override)
    );
    MOCK_METHOD(CwAPI3D::vector3D, getCenterOfGravityForListConsideringMaterials, (CwAPI3D::Interfaces::
    ICwAPI3DElementIDList *), (override));
    MOCK_METHOD(uint32_t, getElementFacetCount, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getWeightReal, (CwAPI3D::elementID), (override));
    MOCK_METHOD(double, getActualPhysicalVolume, (CwAPI3D::elementID), (override));
    MOCK_METHOD(bool, areFacetsCoplanar, (CwAPI3D::Interfaces::ICwAPI3DVertexList *, CwAPI3D::Interfaces::
    ICwAPI3DVertexList *), (override));
    MOCK_METHOD(bool, getRoundMachineRoughPartNegativeWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundMachineRoughPartNegativeWidth, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, bool), (
    override));
    MOCK_METHOD(bool, getRoundMachineRoughPartPositiveWidth, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundMachineRoughPartPositiveWidth, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, bool), (
    override));
    MOCK_METHOD(bool, getRoundMachineRoughPartNegativeHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundMachineRoughPartNegativeHeight, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, bool), (
    override));
    MOCK_METHOD(bool, getRoundMachineRoughPartPositiveHeight, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundMachineRoughPartPositiveHeight, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, bool), (
    override));
    MOCK_METHOD(bool, getRoundMachineRoughPartNegativeLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundMachineRoughPartNegativeLength, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, bool), (
    override));
    MOCK_METHOD(bool, getRoundMachineRoughPartPositiveLength, (CwAPI3D::elementID), (override));
    MOCK_METHOD(void, setRoundMachineRoughPartPositiveLength, (CwAPI3D::Interfaces::ICwAPI3DElementIDList *, bool), (
    override));
    MOCK_METHOD(double, getStandardElementWidthFromGuid, (const CwAPI3D::character *), (override));
    MOCK_METHOD(double, getStandardElementHeightFromGuid, (const CwAPI3D::character *), (override));
    MOCK_METHOD(double, getStandardElementLengthFromGuid, (const CwAPI3D::character *), (override));
    MOCK_METHOD(double, getStandardElementWidthFromName, (const CwAPI3D::character *), (override));
    MOCK_METHOD(double, getStandardElementHeightFromName, (const CwAPI3D::character *), (override));
    MOCK_METHOD(double, getStandardElementLengthFromName, (const CwAPI3D::character *), (override));
    MOCK_METHOD(CwAPI3D::Interfaces::ICwAPI3DString*, getLastError, (int32_t* aErrorCode), (override));
    MOCK_METHOD(double, getWidth, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(double, getHeight, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(double, getLength, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getP1, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getP2, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(CwAPI3D::vector3D, getP3, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(double, getStartHeightCutAngle, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(double, getStartWidthCutAngle, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(double, getEndHeightCutAngle, (CwAPI3D::elementID aID), (override));
    MOCK_METHOD(double, getEndWidthCutAngle, (CwAPI3D::elementID aID), (override));
};