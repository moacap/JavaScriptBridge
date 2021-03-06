#import <Foundation/Foundation.h>
#import <UIKit/UIGeometry.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBUIMotionEffect;

@protocol JSBUIInterpolatingMotionEffect <JSExport, JSBUIMotionEffect>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (retain, nonatomic) id minimumRelativeValue;
@property (copy, nonatomic) NSArray *motionEffects;
@property (retain, nonatomic) id maximumRelativeValue;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) UIInterpolatingMotionEffectType type;

- (instancetype)initWithKeyPath:(NSString *)keyPath type:(UIInterpolatingMotionEffectType)type;

#pragma clang diagnostic pop

@end
