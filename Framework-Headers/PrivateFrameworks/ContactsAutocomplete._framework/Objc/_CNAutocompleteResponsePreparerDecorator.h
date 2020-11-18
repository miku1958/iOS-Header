//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/CNAutocompleteQueryResponsePreparer.h>

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer
{
    CNAutocompleteQueryResponsePreparer *_preparer;
}

@property (readonly) CNAutocompleteQueryResponsePreparer *preparer; // @synthesize preparer=_preparer;

- (void).cxx_destruct;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2;
- (id)prepareResults:(id)arg1;
- (void)setPriorityResultsFuture:(id)arg1;

@end

