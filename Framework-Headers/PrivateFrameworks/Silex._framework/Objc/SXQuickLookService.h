//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookService-Protocol.h>

@class NSOperationQueue, NSString;

@interface SXQuickLookService : NSObject <SXQuickLookService>
{
    NSOperationQueue *_thumbnailQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOperationQueue *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;

- (void).cxx_destruct;
- (void)fetchThumbnailForFile:(id)arg1 size:(struct CGSize)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)init;

@end

