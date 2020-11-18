//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibrary;

@interface MPMediaLibraryView : NSObject <NSCopying>
{
    shared_ptr_6af3da69 _coreView;
    MPMediaLibrary *_library;
    unsigned long long _filteringOptions;
}

@property (readonly, nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property (readonly, nonatomic) MPMediaLibrary *library; // @synthesize library=_library;
@property (readonly, nonatomic) shared_ptr_6af3da69 mlCoreView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_56e9c9de)_performCoreQuery:(shared_ptr_34add297)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasEntitiesForModelKind:(id)arg1;
- (id)initWithLibrary:(id)arg1 filteringOptions:(unsigned long long)arg2;
- (void)performCoreQuery:(shared_ptr_34add297)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performCoreSearchQuery:(shared_ptr_299ddd6f)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

