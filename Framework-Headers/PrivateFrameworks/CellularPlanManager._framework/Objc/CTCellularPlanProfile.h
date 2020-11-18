//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSelected;
    BOOL _isBootstrap;
    BOOL _isDisableNotAllowed;
    BOOL _isDeleteNotAllowed;
    NSData *_profileId;
    NSString *_iccid;
}

@property (copy, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
@property (nonatomic) BOOL isBootstrap; // @synthesize isBootstrap=_isBootstrap;
@property (nonatomic) BOOL isDeleteNotAllowed; // @synthesize isDeleteNotAllowed=_isDeleteNotAllowed;
@property (nonatomic) BOOL isDisableNotAllowed; // @synthesize isDisableNotAllowed=_isDisableNotAllowed;
@property (nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property (copy, nonatomic) NSData *profileId; // @synthesize profileId=_profileId;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(BOOL)arg3 bootstrap:(BOOL)arg4 disableNotAllowed:(BOOL)arg5 deleteNotAllowed:(BOOL)arg6;

@end

