//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, _CSVisualizer;

@interface _CSVisualizationArchiver : NSObject
{
    struct __sFILE *_fileHandle;
    BOOL _closeWhenDone;
    BOOL _outputAsXML;
    struct atomic<bool> _hadEPIPE;
    struct os_unfair_lock_s _dictWriteLock;
    unsigned long long _stats[2];
    _CSVisualizer *_visualizer;
    NSPredicate *_unitDescriptionPredicate;
}

@property (strong, nonatomic) NSPredicate *unitDescriptionPredicate; // @synthesize unitDescriptionPredicate=_unitDescriptionPredicate;
@property (readonly) _CSVisualizer *visualizer; // @synthesize visualizer=_visualizer;

+ (void)beginProvidingVisualizationArchivesWithMachServiceName:(id)arg1 queue:(id)arg2 creatingVisualizersWithBlock:(CDUnknownBlockType)arg3;
+ (BOOL)canProvideVisualizerForMachServiceName:(id)arg1 givenTrailer:(const CDStruct_3d4d02d4 *)arg2;
+ (struct __sFILE *)fileHandleFromFileportMessage:(const struct FileportMessage *)arg1 trailer:(const CDStruct_3d4d02d4 *)arg2;
+ (struct __sFILE *)fileHandleFromMachPort:(unsigned int)arg1 forMachServiceName:(id)arg2;
+ (void)processCommandFromConnection:(void *)arg1 fileHandle:(struct __sFILE *)arg2 providerBlock:(CDUnknownBlockType)arg3;
+ (void)provideVisualizerToConnection:(void *)arg1 fileHandle:(struct __sFILE *)arg2 providerBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishWriting;
- (BOOL)fwrite:(const void *)arg1 size:(unsigned long long)arg2 numberOfItems:(unsigned long long)arg3 error:(id *)arg4;
- (void)getWriteUnitState:(struct _CSWriteUnitState *)arg1 forTable:(unsigned int)arg2;
- (id)initWithVisualizer:(id)arg1 fileHandle:(struct __sFILE *)arg2 closeWhenDone:(BOOL)arg3 allowCompression:(BOOL)arg4 error:(id *)arg5;
- (id)initWithVisualizer:(id)arg1 fileHandle:(struct __sFILE *)arg2 closeWhenDone:(BOOL)arg3 error:(id *)arg4;
- (void)writeAllUnitsInTable:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)writeAllUnitsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)writeDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)writeMetadata:(id)arg1 forStore:(struct __CSStore *)arg2 error:(id *)arg3;
- (void)writeUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (void)writeUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 state:(const struct _CSWriteUnitState *)arg3;

@end

