//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID;

@interface _UIUserDefaultsActivityProxy : NSObject <NSSecureCoding>
{
    BOOL _canEdit;
    BOOL _canMove;
    BOOL _canHide;
    BOOL _isHidden;
    NSUUID *_activityUUID;
    NSNumber *_imageSlot;
    NSNumber *_labelSlot;
    double _platterTextHeight;
}

@property (strong, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property (nonatomic) BOOL canEdit; // @synthesize canEdit=_canEdit;
@property (nonatomic) BOOL canHide; // @synthesize canHide=_canHide;
@property (nonatomic) BOOL canMove; // @synthesize canMove=_canMove;
@property (strong, nonatomic) NSNumber *imageSlot; // @synthesize imageSlot=_imageSlot;
@property (nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property (strong, nonatomic) NSNumber *labelSlot; // @synthesize labelSlot=_labelSlot;
@property (nonatomic) double platterTextHeight; // @synthesize platterTextHeight=_platterTextHeight;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

