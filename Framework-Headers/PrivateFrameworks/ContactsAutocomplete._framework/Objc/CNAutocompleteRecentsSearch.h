//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CRRecentContactsLibrary, NSString;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch>
{
    CRRecentContactsLibrary *_library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autocompleteResultsForRecentContacts:(id)arg1 request:(id)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCoreRecentContactsLibrary:(id)arg1;

@end

