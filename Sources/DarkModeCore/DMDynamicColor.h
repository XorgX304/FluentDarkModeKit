//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//  Licensed under the MIT License.
//

@import UIKit;
#ifdef SWIFT_PACKAGE
#import "DMTraitCollection.h"
#else
#import <FluentDarkModeKit/DMTraitCollection.h>
#endif

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(DynamicColor)
@interface DMDynamicColor : UIColor

@property (nonatomic, readonly) UIColor *lightColor;
@property (nonatomic, readonly) UIColor *darkColor;

+ (UIColor *)colorWithLightColor:(UIColor *)lightColor darkColor:(UIColor *)darkColor;
+ (UIColor *)colorWithDynamicProvider:(UIColor * (^)(DMTraitCollection *traitCollection))dynamicProvider;

@end

NS_ASSUME_NONNULL_END
