﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: Host.sln

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMO
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMO

#include "../../../../Source/GacUI.h"
#include "../Helpers.h"
#ifndef VCZH_DEBUG_NO_REFLECTION
#include "../../../../Source/Reflection/TypeDescriptors/GuiReflectionTemplates.h"
#include "../../../../Source/Reflection/TypeDescriptors/GuiReflectionEvents.h"
#endif

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	struct __vwsnf10_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf1_Demo_demo_ListViewTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf2_Demo_demo_ListViewTabPage___vwsn_instance_ctor__;
	struct __vwsnf3_Demo_demo_ListViewTabPage___vwsn_instance_ctor___;
	struct __vwsnf4_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf5_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf6_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf7_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf8_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	struct __vwsnf9_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
	class __vwsnc1_Demo_demo_MainWindow_CreateViewModel__demo_IViewModel;
}

namespace demo
{
	class ListViewTabPageConstructor;
	class ListViewTabPage;
	class MainWindowConstructor;
	class MainWindow;
	class TextListTabPageConstructor;
	class TextListTabPage;
	class TreeViewTabPageConstructor;
	class TreeViewTabPage;
	class MyTextItem;
	class IViewModel;

	class ListViewTabPageConstructor : public ::vl::Object, public ::vl::reflection::Description<ListViewTabPageConstructor>
	{
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_ListViewTabPageConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ListViewTabPageConstructor>;
#endif
	protected:
		::demo::ListViewTabPage* self = static_cast<::demo::ListViewTabPage*>(nullptr);
		::vl::presentation::controls::GuiComboBoxListControl* comboView = static_cast<::vl::presentation::controls::GuiComboBoxListControl*>(nullptr);
		::vl::presentation::controls::GuiListView* listView = static_cast<::vl::presentation::controls::GuiListView*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiTextList* __vwsn_precompile_2 = static_cast<::vl::presentation::controls::GuiTextList*>(nullptr);
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_5 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_6 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_7 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_8 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_9 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_10 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::controls::list::ListViewColumn> __vwsn_precompile_11 = ::vl::Ptr<::vl::presentation::controls::list::ListViewColumn>();
		::vl::Ptr<::vl::presentation::controls::list::ListViewColumn> __vwsn_precompile_12 = ::vl::Ptr<::vl::presentation::controls::list::ListViewColumn>();
		::vl::Ptr<::vl::presentation::controls::list::ListViewColumn> __vwsn_precompile_13 = ::vl::Ptr<::vl::presentation::controls::list::ListViewColumn>();
		::vl::Ptr<::vl::presentation::controls::list::ListViewColumn> __vwsn_precompile_14 = ::vl::Ptr<::vl::presentation::controls::list::ListViewColumn>();
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_15 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::ListViewTabPage* __vwsn_this_);
	public:
		ListViewTabPageConstructor();
	};

	class ListViewTabPage : public ::vl::presentation::controls::GuiTabPage, public ::demo::ListViewTabPageConstructor, public ::vl::reflection::Description<ListViewTabPage>
	{
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_ListViewTabPage___vwsn_instance_ctor__;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_ListViewTabPage___vwsn_instance_ctor___;
		friend class ::demo::ListViewTabPageConstructor;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_ListViewTabPageConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ListViewTabPage>;
#endif
	public:
		ListViewTabPage();
		void __vwsn_instance_ctor_();
		~ListViewTabPage();
	};

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::demo::MainWindow* self = static_cast<::demo::MainWindow*>(nullptr);
		::vl::presentation::controls::GuiTab* __vwsn_precompile_0 = static_cast<::vl::presentation::controls::GuiTab*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_2 = static_cast<::vl::presentation::controls::GuiTabPage*>(nullptr);
		::vl::presentation::controls::GuiTab* __vwsn_precompile_3 = static_cast<::vl::presentation::controls::GuiTab*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_4 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::demo::TextListTabPage* __vwsn_precompile_5 = static_cast<::demo::TextListTabPage*>(nullptr);
		::demo::ListViewTabPage* __vwsn_precompile_6 = static_cast<::demo::ListViewTabPage*>(nullptr);
		::demo::TreeViewTabPage* __vwsn_precompile_7 = static_cast<::demo::TreeViewTabPage*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_8 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class TextListTabPageConstructor : public ::vl::Object, public ::vl::reflection::Description<TextListTabPageConstructor>
	{
		friend struct ::vl_workflow_global::__vwsnf10_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf6_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf7_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf8_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf9_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<TextListTabPageConstructor>;
#endif
	protected:
		::demo::TextListTabPage* self = static_cast<::demo::TextListTabPage*>(nullptr);
		::vl::Ptr<::demo::IViewModel> ViewModel = ::vl::Ptr<::demo::IViewModel>();
		::vl::presentation::controls::GuiComboBoxListControl* comboView = static_cast<::vl::presentation::controls::GuiComboBoxListControl*>(nullptr);
		::vl::presentation::controls::GuiTextList* textList = static_cast<::vl::presentation::controls::GuiTextList*>(nullptr);
		::vl::presentation::controls::GuiBindableTextList* bindableTextList = static_cast<::vl::presentation::controls::GuiBindableTextList*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiTextList* __vwsn_precompile_2 = static_cast<::vl::presentation::controls::GuiTextList*>(nullptr);
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::Ptr<::vl::presentation::controls::list::TextItem> __vwsn_precompile_5 = ::vl::Ptr<::vl::presentation::controls::list::TextItem>();
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_6 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_7 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_8 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_9 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiStackComposition* __vwsn_precompile_10 = static_cast<::vl::presentation::compositions::GuiStackComposition*>(nullptr);
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_11 = static_cast<::vl::presentation::compositions::GuiStackItemComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_12 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_13 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_14 = static_cast<::vl::presentation::compositions::GuiStackItemComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_15 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_16 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_17 = static_cast<::vl::presentation::compositions::GuiStackItemComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_18 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_19 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_20 = static_cast<::vl::presentation::compositions::GuiStackItemComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_21 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_22 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_23 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_24 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::TextListTabPage* __vwsn_this_);
	public:
		TextListTabPageConstructor();
	};

	class TextListTabPage : public ::vl::presentation::controls::GuiTabPage, public ::demo::TextListTabPageConstructor, public ::vl::reflection::Description<TextListTabPage>
	{
		friend class ::demo::TextListTabPageConstructor;
		friend struct ::vl_workflow_global::__vwsnf10_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf6_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf7_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf8_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf9_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<TextListTabPage>;
#endif
	public:
		::vl::vint32_t counter = 0;
		::vl::Ptr<::demo::IViewModel> __vwsn_parameter_ViewModel = ::vl::Ptr<::demo::IViewModel>();
		::vl::Ptr<::demo::IViewModel> GetViewModel();
		TextListTabPage(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel);
		~TextListTabPage();
	};

	class TreeViewTabPageConstructor : public ::vl::Object, public ::vl::reflection::Description<TreeViewTabPageConstructor>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<TreeViewTabPageConstructor>;
#endif
	protected:
		::demo::TreeViewTabPage* self = static_cast<::demo::TreeViewTabPage*>(nullptr);
		::vl::presentation::controls::GuiTreeView* treeView = static_cast<::vl::presentation::controls::GuiTreeView*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_2 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_5 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_6 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_7 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_8 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_9 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_10 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_11 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_12 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_13 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_14 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_15 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_16 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_17 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_18 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_19 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_20 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_21 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_22 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider> __vwsn_precompile_23 = ::vl::Ptr<::vl::presentation::controls::tree::MemoryNodeProvider>();
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_24 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::TreeViewTabPage* __vwsn_this_);
	public:
		TreeViewTabPageConstructor();
	};

	class TreeViewTabPage : public ::vl::presentation::controls::GuiTabPage, public ::demo::TreeViewTabPageConstructor, public ::vl::reflection::Description<TreeViewTabPage>
	{
		friend class ::demo::TreeViewTabPageConstructor;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<TreeViewTabPage>;
#endif
	public:
		TreeViewTabPage();
		~TreeViewTabPage();
	};

	class MyTextItem : public ::vl::Object, public ::vl::reflection::Description<MyTextItem>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MyTextItem>;
#endif
	public:
		::vl::WString __vwsn_prop_Name = ::vl::WString(L"", false);
		::vl::WString GetName();
		void SetName(const ::vl::WString& __vwsn_value_);
		bool __vwsn_prop_Checked = false;
		bool GetChecked();
		void SetChecked(bool __vwsn_value_);
		MyTextItem();
	};

	class IViewModel : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IViewModel>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IViewModel>;
#endif
	public:
		virtual ::vl::Ptr<::vl::reflection::description::IValueObservableList> GetTextItems() = 0;
		virtual void AddTextItem(::vl::Ptr<::demo::MyTextItem> item) = 0;
		virtual void RemoveTextItem(::vl::vint32_t index) = 0;
		virtual void ClearTextItems() = 0;
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		void LoadListView(::vl::presentation::controls::GuiControlHost* host, const ::vl::Func<void(::vl::Ptr<::vl::presentation::controls::list::ListViewItem>)>& callback);

		static Demo& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf10_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf10_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf1_Demo_demo_ListViewTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::ListViewTabPageConstructor* __vwsnthis_0;

		__vwsnf1_Demo_demo_ListViewTabPageConstructor___vwsn_initialize_instance__(::demo::ListViewTabPageConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf2_Demo_demo_ListViewTabPage___vwsn_instance_ctor__
	{
		::demo::ListViewTabPage* __vwsnthis_0;

		__vwsnf2_Demo_demo_ListViewTabPage___vwsn_instance_ctor__(::demo::ListViewTabPage* __vwsnctorthis_0);

		void operator()() const;
	};

	struct __vwsnf3_Demo_demo_ListViewTabPage___vwsn_instance_ctor___
	{
		::demo::ListViewTabPage* __vwsnthis_0;

		__vwsnf3_Demo_demo_ListViewTabPage___vwsn_instance_ctor___(::demo::ListViewTabPage* __vwsnctorthis_0);

		void operator()(::vl::Ptr<::vl::presentation::controls::list::ListViewItem> item) const;
	};

	struct __vwsnf4_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf4_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		bool operator()(const ::vl::reflection::description::Value& __vwsn_item_, bool __vwsn_value_, bool __vwsn_update_) const;
	};

	struct __vwsnf5_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf5_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		::vl::WString operator()(const ::vl::reflection::description::Value& __vwsn_item_) const;
	};

	struct __vwsnf6_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf6_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf7_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf7_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf8_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf8_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf9_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__
	{
		::demo::TextListTabPageConstructor* __vwsnthis_0;

		__vwsnf9_Demo_demo_TextListTabPageConstructor___vwsn_initialize_instance__(::demo::TextListTabPageConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	class __vwsnc1_Demo_demo_MainWindow_CreateViewModel__demo_IViewModel : public ::vl::Object, public virtual ::demo::IViewModel
	{
	public:
		__vwsnc1_Demo_demo_MainWindow_CreateViewModel__demo_IViewModel();

		void AddTextItem(::vl::Ptr<::demo::MyTextItem> item) override;
		void RemoveTextItem(::vl::vint32_t index) override;
		void ClearTextItems() override;
		::vl::Ptr<::vl::reflection::description::IValueObservableList> GetTextItems() override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
