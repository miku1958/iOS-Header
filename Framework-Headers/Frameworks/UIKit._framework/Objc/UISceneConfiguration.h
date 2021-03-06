//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hadResolutionErrorsOnLoad;
    BOOL _isDefault;
    BOOL _fromPlist;
    NSString *_name;
    NSString *_role;
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}

@property (readonly, nonatomic) BOOL _fromPlist; // @synthesize _fromPlist;
@property (readonly, nonatomic) BOOL _hadResolutionErrorsOnLoad; // @synthesize _hadResolutionErrorsOnLoad;
@property (readonly, nonatomic) BOOL _isDefault; // @synthesize _isDefault;
@property (strong, nonatomic) Class delegateClass;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property (strong, nonatomic) Class sceneClass;
@property (strong, nonatomic) UIStoryboard *storyboard;

+ (id)configurationWithName:(id)arg1 sessionRole:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1;
- (id)_initWithLoadErrorForSessionRole:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 sessionRole:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

