//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class CTCellularPlan, NSNumber, NSString;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_iccid;
    BOOL _shouldDisplayType;
    BOOL _shouldAutoSelectWhenInRange;
    BOOL _isSimStateValid;
    BOOL _shouldDisplay;
    BOOL _isSelectable;
    CTCellularPlan *_plan;
    long long _type;
    long long _lockState;
    NSNumber *_isSelectedOverride;
}

@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isBackedByCellularPlan;
@property (nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property (readonly, nonatomic) BOOL isSelected;
@property (strong, nonatomic) NSNumber *isSelectedOverride; // @synthesize isSelectedOverride=_isSelectedOverride;
@property (nonatomic) BOOL isSimStateValid; // @synthesize isSimStateValid=_isSimStateValid;
@property (nonatomic) long long lockState; // @synthesize lockState=_lockState;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CTCellularPlan *plan; // @synthesize plan=_plan;
@property (nonatomic) BOOL shouldAutoSelectWhenInRange; // @synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange;
@property (readonly, nonatomic) BOOL shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property (nonatomic) BOOL shouldDisplayType; // @synthesize shouldDisplayType=_shouldDisplayType;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCellularPlan:(id)arg1;
- (id)initWithCellularPlan:(id)arg1 iccid:(id)arg2 name:(id)arg3 type:(long long)arg4;
- (id)initWithCellularPlan:(id)arg1 type:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 name:(id)arg2;

@end

