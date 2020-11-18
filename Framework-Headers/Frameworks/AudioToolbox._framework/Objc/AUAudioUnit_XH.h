//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolboxCore/AUAudioUnit_XPC.h>

@class NSExtension, NSObject, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XH : AUAudioUnit_XPC
{
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;
    AUAudioUnit_XPC *_strongInstance;
    CDUnknownBlockType _speechSynthesisOutputMetadataBlock;
}

@property (strong, nonatomic) AUAudioUnit_XPC *strongInstance; // @synthesize strongInstance=_strongInstance;

+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)_doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setSpeechSynthesisOutputMetadataBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)speechSynthesisOutputMetadataBlock;

@end
