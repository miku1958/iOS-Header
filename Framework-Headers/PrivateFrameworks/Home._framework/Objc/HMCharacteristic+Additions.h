//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCharacteristic.h>

@interface HMCharacteristic (Additions)
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;
+ (id)hf_alarmCharacteristicTypes;
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;
+ (CDUnknownBlockType)hf_characteristicSortComparator;
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;
+ (id)hf_descriptionForCharacteristicType:(id)arg1;
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;
- (id)hf_associatedCharacteristicType;
- (id)hf_characteristicTypeDescription;
- (id)hf_defaultValue;
- (BOOL)hf_isReadable;
- (BOOL)hf_isWritable;
- (long long)hf_sortPriority;
@end

