//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICellAccessory.h>

@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory
{
    long long _style;
    CDUnknownBlockType _actionHandler;
}

@property (readonly, nonatomic) UIImage *_customImage;
@property (copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property (readonly, nonatomic) double rotationAngle;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

