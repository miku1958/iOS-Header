//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGReminder.h>

@class NSString, SGDuplicateKey, SGStorageLocation;

@interface SGStorageReminder : SGReminder
{
    SGDuplicateKey *_duplicateKey;
    SGStorageLocation *_dueStorageLocation;
    NSString *_sourceKey;
}

@property (readonly, nonatomic) SGStorageLocation *dueStorageLocation; // @synthesize dueStorageLocation=_dueStorageLocation;
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property (readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;

+ (id)storageReminderFromEntity:(id)arg1 withOrigin:(id)arg2;
+ (id)storageReminderFromEntity:(id)arg1 withStore:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 origin:(id)arg4 dueDate:(id)arg5 dueLocationType:(unsigned char)arg6 dueLocation:(id)arg7 dueLocationTrigger:(unsigned char)arg8 title:(id)arg9 reminderStatus:(unsigned char)arg10 contactIdentifier:(id)arg11 creationDate:(id)arg12;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStorageReminder:(id)arg1;
- (id)toReminder;

@end
