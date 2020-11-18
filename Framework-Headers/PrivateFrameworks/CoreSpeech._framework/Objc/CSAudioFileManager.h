//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioFileManager : NSObject
{
}

+ (id)_createAudioFileWriterForAdBlockerWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createAudioFileWriterForPHSTrainingWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createAudioFileWriterWithLoggingDir:(id)arg1 withLoggingUUID:(id)arg2 inputFormat:(struct AudioStreamBasicDescription)arg3 outputFormat:(struct AudioStreamBasicDescription)arg4;
+ (id)_getDateLabel;
+ (void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2;
+ (id)_sharedAudioLoggingQueue;
+ (id)audioFileWriterForAttentiveSiri;
+ (void)cleanupOrphanedGradingFiles;
+ (id)createAudioFileWriterForAdBlockerWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForPHSTrainingWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForRemoteVADWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2 withLoggingUUID:(id)arg3;
+ (id)createAudioFileWriterWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2 withLoggingUUID:(id)arg3;
+ (id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1;
+ (void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2;
+ (void)pruneLogFiles;
+ (void)pruneNumberOfGradingFilesTo:(unsigned long long)arg1;
+ (void)pruneNumberOfLogFilesTo:(unsigned long long)arg1;
+ (void)removeLogFilesOlderThanNDays:(float)arg1;

@end
