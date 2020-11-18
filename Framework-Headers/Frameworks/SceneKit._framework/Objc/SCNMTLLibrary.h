//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SCNMTLLibraryManager;
@protocol MTLLibrary;

__attribute__((visibility("hidden")))
@interface SCNMTLLibrary : NSObject
{
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
    id<MTLLibrary> _library;
}

@property (readonly, nonatomic) id<MTLLibrary> library; // @synthesize library=_library;

- (void)_load;
- (void)dealloc;
- (id)initWithPath:(id)arg1 manager:(id)arg2;

@end
