//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/QLTop.h>

#import <OfficeImport/OIProgressiveReaderDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface PMTop : QLTop <OIProgressiveReaderDelegate>
{
}

+ (BOOL)supportsProgressiveMapping;
- (void)initializeClasses;
- (BOOL)isCancelled;
- (Class)mapperClassForIndexing:(BOOL)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(BOOL)arg6;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;

@end
