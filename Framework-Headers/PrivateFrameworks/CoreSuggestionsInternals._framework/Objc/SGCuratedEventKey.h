//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey>
{
    NSString *_externalId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithExternalId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCuratedEventKey:(id)arg1;
- (id)serialize;

@end
