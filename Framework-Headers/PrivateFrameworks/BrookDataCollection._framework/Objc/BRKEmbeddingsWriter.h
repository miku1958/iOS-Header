//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BrookDataCollection/BRKWriter.h>

#import <BrookDataCollection/BRKEmbeddingsWriter-Protocol.h>

@class NSString;

@interface BRKEmbeddingsWriter : BRKWriter <BRKEmbeddingsWriter>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_lock_writeEmbedding:(id)arg1;
- (void)_lock_writeMultiArray:(id)arg1;
- (void)close;
- (id)initWithPath:(id)arg1;
- (void)writeEmbedding:(id)arg1;

@end
