/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class NSImageCell;

@interface TTSettingsSourceCell : NSTextFieldCell
{
    NSTextFieldCell *_titleCell;
    NSTextFieldCell *_defaultCell;
    NSImageCell *_thumbnailCell;
    BOOL _isEditing;
    id _dataSource;
}

- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setBackgroundStyle:(long long)arg1;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)profile;
- (BOOL)shouldShowDefaultCell;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)defaultRectForBounds:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)thumbnailImage;

@end

