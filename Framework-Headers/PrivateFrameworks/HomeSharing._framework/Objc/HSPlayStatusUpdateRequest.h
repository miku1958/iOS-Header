//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest
{
    unsigned int _interfaceID;
    unsigned int _revisionID;
}

@property (readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property (readonly, nonatomic) unsigned int revisionID; // @synthesize revisionID=_revisionID;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 revisionID:(unsigned int)arg2;
- (BOOL)isConcurrent;
- (double)timeoutInterval;

@end

