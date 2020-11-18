//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

#import <VideoSubscriberAccountUI/VSCredentialEntryViewModelDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIKItemGroupDelegate-Protocol.h>

@class NSArray, NSString, VSIKItemGroupElement;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryAppDocumentController : VSAppDocumentController <VSCredentialEntryViewModelDelegate, VSIKItemGroupDelegate>
{
    VSIKItemGroupElement *_pickerElement;
    NSArray *_buttonElements;
}

@property (strong, nonatomic) NSArray *buttonElements; // @synthesize buttonElements=_buttonElements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSIKItemGroupElement *pickerElement; // @synthesize pickerElement=_pickerElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_credentialEntryViewModelWithViewModel:(id)arg1;
- (id)_newViewModel;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (BOOL)_updateCredentialEntryViewModel:(id)arg1 error:(id *)arg2;
- (BOOL)_updateCredentialEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (BOOL)_updateViewModel:(id)arg1 error:(id *)arg2;
- (void)itemGroup:(id)arg1 selectedItemIndexDidChange:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewModel:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (void)viewModel:(id)arg1 pickerDidSelectRow:(unsigned long long)arg2;

@end
