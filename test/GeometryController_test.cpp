//
// Created by brunn on 22/07/2024.
//


#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <cwapi3d/CwAPI3D.h>
#include "GeometryController_mock.h"

class GeometryControllerTest : public ::testing::Test {
protected:
    MockGeometryController mockController;
};

TEST_F(GeometryControllerTest, GetWidthReturnsCorrectValue) {
    CwAPI3D::elementID testID = 3456789;
    double expectedWidth = 240.0;

    EXPECT_CALL(mockController, getWidth(testID))
        .WillOnce(::testing::Return(expectedWidth));

    double width = mockController.getWidth(testID);
    EXPECT_EQ(width, expectedWidth);
}

TEST_F(GeometryControllerTest, GetHeightReturnsCorrectValue) {
    CwAPI3D::elementID testID = 3456789;
    double expectedHeight = 360.0;

    EXPECT_CALL(mockController, getHeight(testID))
        .WillOnce(::testing::Return(expectedHeight));

    double height = mockController.getHeight(testID);
    EXPECT_EQ(height, expectedHeight);
}

TEST_F(GeometryControllerTest, GetP1ReturnsCorrectValue) {
    CwAPI3D::elementID testID = 3456789;
    CwAPI3D::vector3D expectedP1 = {1.0, 2.0, 3.0};

    EXPECT_CALL(mockController, getP1(testID))
        .WillOnce(::testing::Return(expectedP1));

    CwAPI3D::vector3D p1 = mockController.getP1(testID);
    EXPECT_EQ(p1.mX, expectedP1.mX);
    EXPECT_EQ(p1.mY, expectedP1.mY);
    EXPECT_EQ(p1.mZ, expectedP1.mZ);
}