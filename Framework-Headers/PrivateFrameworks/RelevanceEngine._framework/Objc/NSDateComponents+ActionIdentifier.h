//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateComponents.h>

#import <RelevanceEngine/REDonatedActionIdentifierProviding-Protocol.h>

@class NSString;

@interface NSDateComponents (ActionIdentifier) <REDonatedActionIdentifierProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)re_actionIdentifierHashValue;
@end

