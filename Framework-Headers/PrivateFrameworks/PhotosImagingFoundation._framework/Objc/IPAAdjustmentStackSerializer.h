//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAAdjustmentStackSerializer-Protocol.h>

@class NSString;

@interface IPAAdjustmentStackSerializer : NSObject <IPAAdjustmentStackSerializer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)B64StringForData:(id)arg1;
+ (id)JSONFromData:(id)arg1;
+ (id)JSONFromData:(id)arg1 error:(id *)arg2;
+ (id)archiveDictionary:(id)arg1;
+ (id)archiveDictionary:(id)arg1 error:(id *)arg2;
+ (id)compressData:(id)arg1;
+ (id)compressData:(id)arg1 error:(id *)arg2;
+ (id)dataFromB64String:(id)arg1;
+ (id)dataFromJSON:(id)arg1;
+ (id)dataFromJSON:(id)arg1 error:(id *)arg2;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)dataFromPropertyList:(id)arg1 error:(id *)arg2;
+ (id)decompressData:(id)arg1;
+ (id)decompressData:(id)arg1 error:(id *)arg2;
+ (id)propertyListFromData:(id)arg1;
+ (id)propertyListFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchiveData:(id)arg1;
+ (id)unarchiveData:(id)arg1 error:(id *)arg2;
- (id)_adjustmentStackFromData:(id)arg1 error:(id *)arg2;
- (id)_dataFromAdjustmentStack:(id)arg1 error:(id *)arg2;
- (id)adjustmentStackFromData:(id)arg1 error:(id *)arg2;
- (id)archiveFromData:(id)arg1 error:(id *)arg2;
- (id)dataFromAdjustmentStack:(id)arg1 error:(id *)arg2;
- (id)dataFromArchive:(id)arg1 error:(id *)arg2;

@end

