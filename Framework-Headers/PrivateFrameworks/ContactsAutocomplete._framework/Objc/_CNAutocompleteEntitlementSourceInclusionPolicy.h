//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@class NSString;

@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL includeCalendarServers;
@property (readonly) BOOL includeContacts;
@property (readonly) BOOL includeDirectoryServers;
@property (readonly) BOOL includePredictions;
@property (readonly) BOOL includeRecents;
@property (readonly) BOOL includeSuggestions;
@property (readonly) BOOL includeSupplementalResults;
@property (readonly) Class superclass;


@end
