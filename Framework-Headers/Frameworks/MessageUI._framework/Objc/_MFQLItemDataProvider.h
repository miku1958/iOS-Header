//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/QLPreviewItemDataProvider-Protocol.h>

@class NSData, NSString, QLItem;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider>
{
    NSData *_data;
    QLItem *_item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) QLItem *item; // @synthesize item=_item;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)provideDataForItem:(id)arg1;

@end

