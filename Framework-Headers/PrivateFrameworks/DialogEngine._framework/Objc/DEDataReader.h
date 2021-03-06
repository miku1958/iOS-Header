//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEReader-Protocol.h>

@class NSData;

@interface DEDataReader : NSObject <DEReader>
{
    NSData *_data;
    unsigned long long _dataOffset;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) unsigned long long dataOffset; // @synthesize dataOffset=_dataOffset;

- (void).cxx_destruct;
- (void)close;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)arg1;

@end

