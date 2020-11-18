//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString;
@protocol _SFMailContentProviderDataSource;

@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate>
{
    BOOL _restrictAddingPDFContent;
    id<_SFMailContentProviderDataSource> _dataSource;
}

@property (weak, nonatomic) id<_SFMailContentProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL restrictAddingPDFContent; // @synthesize restrictAddingPDFContent=_restrictAddingPDFContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_bestContentTypeForPreferredContentType:(long long)arg1;
- (BOOL)_canProvideContentType:(long long)arg1;
- (long long)_defaultPreferredContentType;
- (void)_getPDFDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getReaderContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getWebArchiveDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_preferentiallyOrderedAvailableContentTypes;
- (id)_preferentiallyOrderedContentTypes;
- (void)getMailComposeViewControllerWithMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)prepareMailComposeViewController:(id)arg1 withMailToURL:(id)arg2 contentURL:(id)arg3 preferredContentType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
