//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/TMLFunction.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSString;

@interface TMLSignalHandlerFunction : TMLFunction <TMLModelSerialize>
{
    NSString *_signalName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *signalName; // @synthesize signalName=_signalName;
@property (readonly) Class superclass;

+ (id)decode:(const struct ProtobufCMessage *)arg1;
- (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithSignalName:(id)arg1 functionName:(id)arg2 body:(id)arg3;

@end

