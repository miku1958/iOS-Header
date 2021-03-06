//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPImage.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@interface LPImageAttachmentSubstitute : LPImage <NSSecureCoding>
{
    long long _index;
}

@property (nonatomic) long long index; // @synthesize index=_index;

+ (BOOL)supportsSecureCoding;
- (BOOL)_shouldEncodeData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

