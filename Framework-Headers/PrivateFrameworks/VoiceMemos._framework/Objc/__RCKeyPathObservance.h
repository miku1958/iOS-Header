//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCKeyPathObservance-Protocol.h>

@class NSArray, NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface __RCKeyPathObservance : NSObject <RCKeyPathObservance>
{
    id<NSObject> _object;
    NSArray *_keyPaths;
    CDUnknownBlockType _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
@property (weak, nonatomic) id<NSObject> object; // @synthesize object=_object;
@property (copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)remove;

@end

