//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNAutocompleteCalendarServerOperationFactory, CNStringTokenizer, EKEventStore, NSString;

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch>
{
    EKEventStore *_eventStore;
    CNAutocompleteCalendarServerOperationFactory *_operationFactory;
    CNStringTokenizer *_tokenizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CNAutocompleteCalendarServerOperationFactory *operationFactory; // @synthesize operationFactory=_operationFactory;
@property (readonly) Class superclass;
@property (strong, nonatomic) CNStringTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;

- (void).cxx_destruct;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithEventStore:(id)arg1 operationFactory:(id)arg2;
- (id)queryForFetchRequest:(id)arg1;
- (CDUnknownBlockType)resultTransformWithFactory:(id)arg1;
- (id)runQuery:(id)arg1 forSource:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end

