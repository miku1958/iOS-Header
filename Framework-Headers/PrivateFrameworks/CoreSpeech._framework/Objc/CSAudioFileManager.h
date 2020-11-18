//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioFileManager : NSObject
{
}

+ (id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_getDateLabel;
+ (void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2;
+ (id)_sharedAudioLoggingQueue;
+ (id)audioFileWriterForAttentiveSiri;
+ (id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForRemoteVADWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterFromWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1;
+ (void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2;
+ (void)pruneNumberOfLogFilesTo:(unsigned long long)arg1;
+ (void)removeLogFilesOlderThanNDays:(float)arg1;

@end
