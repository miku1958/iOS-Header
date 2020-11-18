//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IntentsUI/INImageLoading-Protocol.h>
#import <IntentsUI/SFResourceLoader-Protocol.h>

@class NSString;
@protocol INUIImageLoaderDelegate;

@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading>
{
    id<INUIImageLoaderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<INUIImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (id)registeredImageLoaderWithScreenDelegate;
- (void).cxx_destruct;
- (BOOL)canLoadImageDataForImage:(id)arg1;
- (void)dealloc;
- (void)deregisterWithIntents;
- (void)deregisterWithSearchFoundation;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(CDStruct_c3b9c2ee)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)registerWithIntents;
- (void)registerWithSearchFoundation;

@end
