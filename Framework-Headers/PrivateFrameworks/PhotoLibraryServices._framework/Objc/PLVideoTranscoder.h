//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLVideoTranscoder : NSObject
{
}

+ (id)exportPresetsCompatibleWithVideoAtURL:(id)arg1;
+ (id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (void)transcodeVideo:(id)arg1 outputURL:(id)arg2 startTime:(CDStruct_1b6d18a9)arg3 endTime:(CDStruct_1b6d18a9)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(CDStruct_1b6d18a9)arg3 endTime:(CDStruct_1b6d18a9)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end

