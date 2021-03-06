/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVCornerUtilities : NSObject

+ (struct CGPath { }*)createPathForRadii:(struct TVCornerRadii { float x1; float x2; float x3; float x4; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (struct CGPath { }*)createPathForRadii:(struct TVCornerRadii { float x1; float x2; float x3; float x4; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isContinuous:(BOOL)arg3;
+ (struct TVCornerRadii { float x1; float x2; float x3; float x4; })flipCGOriginRadii:(struct TVCornerRadii { float x1; float x2; float x3; float x4; })arg1;
+ (struct TVCornerRadii { float x1; float x2; float x3; float x4; })radiiFromRadius:(float)arg1;
+ (BOOL)radiiIsZero:(struct TVCornerRadii { float x1; float x2; float x3; float x4; })arg1;
+ (float)radiusFromCornerRadii:(struct TVCornerRadii { float x1; float x2; float x3; float x4; })arg1;

@end
