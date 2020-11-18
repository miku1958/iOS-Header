//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject
{
    void *_layoutsLibraryHandle;
    NSMutableDictionary *_internalCache;
}

@property (strong) NSMutableDictionary *internalCache; // @synthesize internalCache=_internalCache;
@property (readonly, nonatomic) void *layoutsLibraryHandle; // @synthesize layoutsLibraryHandle=_layoutsLibraryHandle;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;
- (void)dealloc;
- (id)init;
- (id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;

@end

