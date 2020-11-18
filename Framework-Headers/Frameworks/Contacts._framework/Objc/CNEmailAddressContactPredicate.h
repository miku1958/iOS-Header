//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNEmailAddressContactPredicate : CNPredicate <CNSuggestedContactPredicate>
{
    BOOL _returnsMultipleResults;
    NSString *_emailAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(BOOL)arg2;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;

@end
