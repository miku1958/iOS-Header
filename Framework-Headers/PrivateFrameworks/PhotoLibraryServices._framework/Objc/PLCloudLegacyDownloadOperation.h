//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudLegacyOperation.h>

@interface PLCloudLegacyDownloadOperation : PLCloudLegacyOperation
{
    BOOL _cancelled;
}

- (unsigned long long)cost;
- (id)description;
- (void)requestCancel;
- (void)runOperationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
