//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey>
{
    NSString *_serialized;
    NSString *_domain;
    NSString *_groupId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;
- (void).cxx_destruct;
- (id)alternativeKeysForEventKitQuery;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGloballyUniqueId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (BOOL)isDropoff;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPseudoEventKey:(id)arg1;
- (id)keyForEventKitQuery;
- (id)serialize;

@end

