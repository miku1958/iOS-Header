//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@class NSDictionary;

@interface HSControlPromptEntryRequest : HSRequest
{
    unsigned int _interfaceID;
    NSDictionary *_attributes;
}

@property (readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;

+ (id)portInfoRequestWithInterfaceID:(unsigned int)arg1 key:(unsigned int)arg2;
+ (id)requestWithInterfaceID:(unsigned int)arg1 attributes:(id)arg2;
- (void).cxx_destruct;
- (id)_bodyDataForAttributes:(id)arg1;
- (id)_commandStringForCommand:(unsigned int)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 attributes:(id)arg2;

@end
