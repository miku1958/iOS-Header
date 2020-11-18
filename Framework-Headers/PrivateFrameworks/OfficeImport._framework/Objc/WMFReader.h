//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFReader-Protocol.h>

@class NSString, WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : NSObject <MFReader>
{
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    const char *m_pBuffer;
    unsigned int m_cursor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)checkBytesAvailable:(unsigned int)arg1;
- (id)initWithWMFPlayer:(id)arg1;
- (int)moveDataCursor:(unsigned int)arg1;
- (int)play:(id)arg1;
- (int)playHeaders;
- (int)playRecord;

@end
