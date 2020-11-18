//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DAFolder, NSArray;

@interface DAFolderSyncRequest : NSObject
{
    BOOL _hasRemoteChanges;
    BOOL _isInitialUberSync;
    BOOL _isResyncAfterConnectionFailed;
    BOOL _isResyncAfterServerError;
    BOOL _containsPostponedActions;
    DAFolder *_folder;
    NSArray *_actions;
}

@property (strong, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (nonatomic) BOOL containsPostponedActions; // @synthesize containsPostponedActions=_containsPostponedActions;
@property (strong, nonatomic) DAFolder *folder; // @synthesize folder=_folder;
@property (nonatomic) BOOL hasRemoteChanges; // @synthesize hasRemoteChanges=_hasRemoteChanges;
@property (nonatomic) BOOL isInitialUberSync; // @synthesize isInitialUberSync=_isInitialUberSync;
@property (nonatomic) BOOL isResyncAfterConnectionFailed; // @synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed;
@property (nonatomic) BOOL isResyncAfterServerError; // @synthesize isResyncAfterServerError=_isResyncAfterServerError;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFolder:(id)arg1 hasRemoteChanges:(BOOL)arg2 isInitialUberSync:(BOOL)arg3;

@end

