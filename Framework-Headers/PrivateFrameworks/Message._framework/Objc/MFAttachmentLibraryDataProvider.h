//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAttachmentDataProvider.h>

@class MFMessageLibrary, MFWeakReferenceHolder;

@interface MFAttachmentLibraryDataProvider : MFAttachmentDataProvider
{
    MFWeakReferenceHolder *_messageLibraryHolder;
}

@property (weak, nonatomic) MFMessageLibrary *messageLibrary;

- (void)dealloc;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithLibrary:(id)arg1;
- (id)messageForAttachment:(id)arg1;

@end

