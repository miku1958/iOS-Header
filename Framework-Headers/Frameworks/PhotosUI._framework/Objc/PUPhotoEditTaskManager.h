//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoEditTaskManager : NSObject
{
    NSMutableDictionary *_pendingRequestsByAsset;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)clearEditsForPhoto:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)pendingSaveRequestForPhoto:(id)arg1;
- (id)saveEditsForPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)saveEditsForPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

