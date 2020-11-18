//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TUIKBGraphSerialization;

@interface TUIKeyboardLayoutFactory : NSObject
{
    void *_layoutsLibraryHandle;
    NSMutableDictionary *_internalCache;
    TUIKBGraphSerialization *_decoder;
}

@property (strong) TUIKBGraphSerialization *decoder; // @synthesize decoder=_decoder;
@property (strong) NSMutableDictionary *internalCache; // @synthesize internalCache=_internalCache;
@property (readonly, nonatomic) void *layoutsLibraryHandle; // @synthesize layoutsLibraryHandle=_layoutsLibraryHandle;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;
- (void)dealloc;
- (id)init;
- (id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;

@end

