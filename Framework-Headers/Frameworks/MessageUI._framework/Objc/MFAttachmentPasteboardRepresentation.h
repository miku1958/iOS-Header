//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFAttachmentPasteboardRepresentation-Protocol.h>
#import <MessageUI/NSCoding-Protocol.h>

@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSCoding, MFAttachmentPasteboardRepresentation>
{
    NSData *_data;
    NSString *_name;
    NSString *_mimeType;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMFAttachment:(id)arg1;

@end
