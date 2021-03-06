//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIHomeShareMediaLibraryManager-Protocol.h>

@class NSArray, NSMutableArray, NSString, VUIMediaLibraryManager;
@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManagerDelegate;

__attribute__((visibility("hidden")))
@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager>
{
    id<VUIHomeShareMediaLibraryManagerDelegate> _delegate;
    VUIMediaLibraryManager *_manager;
    NSMutableArray *_mutableHomeShareMediaLibraries;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUIHomeShareMediaLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property (weak, nonatomic) VUIMediaLibraryManager *manager; // @synthesize manager=_manager;
@property (strong, nonatomic) NSMutableArray *mutableHomeShareMediaLibraries; // @synthesize mutableHomeShareMediaLibraries=_mutableHomeShareMediaLibraries;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property (readonly) Class superclass;

+ (id)_sharedMPMediaLibraries;
- (void).cxx_destruct;
- (void)_handleAvailableMediaLibrariesDidChange:(id)arg1;
- (id)_homeShareMediaLibraries;
- (void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2;
- (void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg1;
- (void)beginDiscoveringMediaLibraries;
- (void)dealloc;
- (void)endDiscoveringMediaLibraries;
- (id)initWithManager:(id)arg1;

@end

