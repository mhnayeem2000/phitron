from django import forms
from django.forms.widgets import NumberInput


# Create your forms here.

class ExampleForm(forms.Form):
    name = forms.CharField()
    email = forms.EmailField()
    rating = forms.CharField()
    Instrument_Type = forms.CharField()
    Album_Name = forms.CharField()
    Release_Date = forms.DateField(widget=NumberInput(attrs={'type': 'date'}))
