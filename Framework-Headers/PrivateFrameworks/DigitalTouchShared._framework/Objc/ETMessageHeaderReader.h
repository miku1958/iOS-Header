//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ETMessageHeaderReader : NSObject
{
}

+ (void)getSendTime:(double *)arg1 type:(unsigned short *)arg2 inArchive:(id)arg3;
+ (id)identifierInArchive:(id)arg1;
+ (unsigned short)messageTypeInArchive:(id)arg1;
+ (double)sendTimeInArchive:(id)arg1;

@end

