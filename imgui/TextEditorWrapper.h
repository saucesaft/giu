#pragma once

#include "imguiWrapperTypes.h"
#ifdef __cplusplus
extern "C"
{
#endif

typedef void *IggTextEditor;

extern IggTextEditor IggNewTextEditor();
extern void IggTextEditorRender(IggTextEditor handle, const char* aTitle, IggVec2 const *size, int aBorder);
extern void IggTextEditorSetShowWhitespaces(IggTextEditor handle, int aValue);
extern void IggTextEditorSetTabSize(IggTextEditor handle, int size);
extern void IggTextEditorSetText(IggTextEditor handle, const char* text);
extern char const *IggTextEditorGetText(IggTextEditor handle);
extern IggBool IggTextEditorHasSelection(IggTextEditor handle);
extern char const *IggTextEditorGetSelectedText(IggTextEditor handle);
extern char const *IggTextEditorGetCurrentLineText(IggTextEditor handle);
extern IggBool IggTextEditorIsTextChanged(IggTextEditor handle);

extern void IggTextEditorSetLanguageDefinitionSQL(IggTextEditor handle);
extern void IggTextEditorSetLanguageDefinitionCPP(IggTextEditor handle);
extern void IggTextEditorSetLanguageDefinitionC(IggTextEditor handle);
extern void IggTextEditorSetLanguageDefinitionLua(IggTextEditor handle);

#ifdef __cplusplus
}
#endif