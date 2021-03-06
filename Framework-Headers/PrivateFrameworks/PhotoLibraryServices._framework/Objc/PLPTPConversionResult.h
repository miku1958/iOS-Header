//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPTPConversionResult : NSObject
{
    NSString *_pathExtension;
    unsigned long long _estimatedFileLength;
}

@property (readonly) unsigned long long estimatedFileLength; // @synthesize estimatedFileLength=_estimatedFileLength;
@property (readonly, copy) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;

- (void).cxx_destruct;
- (id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2;

@end

